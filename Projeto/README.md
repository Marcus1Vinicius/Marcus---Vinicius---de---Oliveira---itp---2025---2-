## Projeto de Sistema de Gestão para Pequenos Mercados

Este projeto tem como objetivo desenvolver um sistema de gestão para pequenos comércios, permitindo que o usuário administre seu negócio de forma mais autônoma. O software oferecerá funcionalidades para otimizar o controle de estoque e simplificar o processo de vendas, com foco em um ambiente de **sistema embarcado**.

-----

### Funcionalidades Principais

  * **Gestão de Produtos e Estoque:** Cadastrar, editar, excluir e consultar produtos. O sistema permite a leitura de código de barras para agilizar o cadastro e a identificação. O estoque será atualizado automaticamente a cada venda.
  * **Gestão de Vendas:** Registrar transações detalhadas, onde o valor de cada venda é a soma dos produtos comprados. O sistema armazena o valor do produto no momento da venda, garantindo a integridade dos dados históricos. Cada venda é associada a uma nota fiscal.
  * **Emissão de Nota Fiscal:** Gerar notas fiscais para cada venda, contendo informações do comércio e os detalhes da transação.

-----

### Entidades do Sistema

  * **COMERCIO:**

      * `nome` (char[])
      * `cnpj` (char[])
      * `endereco` (char[])
      * *(Outros dados relevantes do comércio)*

  * **PRODUTO:**

      * `id` (int) - Identificador interno.
      * `codigo_de_barra` (char[]) - Lído pelo scanner.
      * `nome` (char[])
      * `valor_atual` (float)
      * `quantidade_em_estoque` (int)

  * **VENDA:**

      * `id` (int) - Identificador único da venda.
      * `data_venda` (Data) - Estrutura para armazenar dia, mês e ano.
      * `valor_total` (float) - Soma de todos os itens da venda.

  * **ITEM\_VENDA:** (Entidade de associação entre VENDA e PRODUTO)

      * `id_venda` (int) - Chave estrangeira para a VENDA.
      * `id_produto` (int) - Chave estrangeira para o PRODUTO.
      * `quantidade` (int) - Quantidade do produto vendido nesta transação.
      * `valor_unitario` (float) - Preço do produto no momento da venda.

  * **NOTA\_FISCAL:**

      * `id` (int) - Identificador único da nota fiscal.
      * `data_emissao` (Data) - Estrutura para armazenar dia, mês e ano.
      * `id_venda` (int) - Chave estrangeira para a VENDA à qual a nota se refere.

-----

### Estrutura do Projeto

```
nome-do-aluno-itp-2025-2/
|-- projeto/
|   |-- src/                      # Código-fonte das implementações (.c)
|   |   |-- main.c                # Fluxo principal do programa e menu
|   |   |-- produto.c             # Implementação das funções de produto
|   |   |-- vendas.c              # Implementação das funções de venda
|   |   |-- item_venda.c          # Implementação das funções de item de venda
|   |   |-- nota_fiscal.c         # Implementação das funções de nota fiscal
|   |   |-- data.c                # Implementação das funções relacionadas à data (se houver)
|   |   |-- comercio.c            # Implementação das funções de comércio
|   |   `-- ... (outros .c se necessário)
|   |-- include/                  # Arquivos de cabeçalho (.h)
|   |   |-- produto.h             # Declaração da struct Produto e suas funções
|   |   |-- vendas.h              # Declaração da struct Venda e suas funções
|   |   |-- item_venda.h          # Declaração da struct Item_Venda e suas funções
|   |   |-- nota_fiscal.h         # Declaração da struct Nota_Fiscal e suas funções
|   |   |-- data.h                # Declaração da struct Data
|   |   |-- comercio.h            # Declaração da struct Comercio
|   |   `-- ... (outros .h se necessário)
|   |-- Makefile                  # Regras de compilação automatizada
|   `-- README.md                 # Instruções sobre o projeto, compilação e uso
|
|-- listas/                       # Exercícios/listas da disciplina
|   |-- lista1/
|   |   `-- ...
|   |-- lista2/
|   |   `-- ...
|   `-- ...
|
`-- README.md                     # Descrição geral do repositório (projeto + listas)
```

-----

### Como Compilar e Executar

1.  Certifique-se de ter um compilador C (como o GCC) instalado no seu sistema.
2.  Navegue até o diretório raiz do projeto (`nome-do-aluno-itp-2025-2/`) no seu terminal.
3.  Execute o comando: `make`
4.  Para rodar o programa, use: `./projeto/nome_do_executavel` (o nome do executável será definido no seu `Makefile`).