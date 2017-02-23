(function($){
    Drupal.behaviors.out_of_stock = {
        attach: function (context, settings) {
            $('.click-pre-order', context).click(function () {
                var prod_id = $(this).data('product');
                //$('#out-of-stock-form input[name^=product_id]').val(prod_id);
                $.cookie('product_id', prod_id, {expires : 30, path: '/'});
                console.log(prod_id);
                setTimeout(function(){
                    $('#modal_pre_order').modal({
                        show: true,
                    });
                },500);
                return false;
            });
        }
    }
})(jQuery);