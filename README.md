# Programação e Desenvolvimento de Software II (PDS2) | UFMG

⚠️ **Este repositório contém trabalhos acadêmicos. Se você é estudante da mesma disciplina, lembre-se das políticas de integridade acadêmica da UFMG.**

---

Aqui estão trabalhos práticos e VPLs (Virtual Programming Lab) desenvolvidos durante a disciplina de Programação e Desenvolvimento de Software II na UFMG. PDS2 é uma disciplina do curso de computação que aborda conceitos avançados de programação em C++, incluindo:

- Programação Orientada a Objetos
- Estruturas de Dados
- Gerenciamento de Memória
- Tratamento de Exceções
- Boas Práticas de Desenvolvimento

---

## 📁 Estrutura do Repositório

```python
pds2/
├── vpl_XX/              # Exercícios do VPL
│   ├── build/           # Arquivos .o e .exe (ignorados)
│   │   ├── foo.o      
│   │   ├── main.o      
│   │   └── main.exe 
│   ├── src/             # Códigos fonte
│   │   ├── foo.cpp      
│   │   └── main.cpp     
│   ├── include/         # Arquivos de cabeçalho
│   │   └── foo.hpp     
│   ├── INSTRUÇÕES.md    # Instruções específicas
│   └── Makefile         # Arquivo Makefile p/ compilação (g++)
```

---

## 🔧 Requisitos

- Compilador C++ (GCC recomendado)
- CMake (versão 3.10 ou superior)
- Git

---

## 🚀 Como Executar

1. Clone o repositório:
```bash
git clone https://github.com/Lealwbs/pds2.git
cd pds2
```

2. Utilizando Terminal do Windows / CMD:
```bash
cd .vplXX\            # Acessar VPL
mingw32-make          # Compilar totalmente
mingw32-make run      # Compilar e executar
mingw32-make clean    # Limpar diretório \build\*
```

3. Utilizando Linux:
```bash
cd vplXX/             # Acessar VPL
make                  # Compilar totalmente
make run              # Compilar e executar
make clean_linux      # Limpar diretório \build\*
```

---

## 📝 Notas Importantes

- Todos os códigos seguem o padrão C++11 ou superior
- Os exercícios são verificados através do sistema VPL da UFMG
- É importante ler o arquivo em Markdown específico de cada VPL antes de começar

---