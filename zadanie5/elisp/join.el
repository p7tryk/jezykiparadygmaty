;; This buffer is for text that is not saved, and for Lisp evaluation.
;; To create a file, visit it with C-x C-f and enter text in its buffer.

(setq a '(1 2 3))
(setq b '(4 5 6))
(setq c '(7 8 9))

;;(while lista
;;  (add-to-list 'listb (car lista)) 
;;  (setq lista (cdr lista)))
;;)

(defun join (&rest c)
  (while (cdr c)
    (append a (car c)))
  )
  


(setq d (join a b c))


(message "%s" a)
(message "%s" b)
(message "%s" d)
