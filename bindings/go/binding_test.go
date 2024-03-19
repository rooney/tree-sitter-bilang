package tree_sitter_bilang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-bilang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_bilang.Language())
	if language == nil {
		t.Errorf("Error loading Bilang grammar")
	}
}
