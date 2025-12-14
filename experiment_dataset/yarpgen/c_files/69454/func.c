/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69454
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_2 [12U] [i_0] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_18 &= ((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_7)), (var_1))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_6), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) <= (arr_1 [i_0] [i_1]))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [20LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((short) min((arr_3 [i_0] [i_1] [(_Bool)1]), (((/* implicit */signed char) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
                var_20 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_2] [i_1] [i_0]))));
                var_21 -= ((/* implicit */unsigned short) ((long long int) max((((((/* implicit */_Bool) var_10)) ? (2543409216434530822LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))), ((~(1049549195284594261LL))))));
                var_22 = ((/* implicit */unsigned short) ((max((var_15), (((/* implicit */long long int) arr_0 [i_1] [i_0])))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            }
        }
    }
    for (int i_3 = 2; i_3 < 21; i_3 += 4) 
    {
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) max((max((arr_5 [i_3 + 4]), (((/* implicit */unsigned short) var_0)))), (((/* implicit */unsigned short) ((short) arr_7 [i_3 - 1] [i_3 - 2] [i_3 + 4]))))))));
        var_24 = arr_1 [(unsigned char)16] [i_3];
        var_25 -= ((/* implicit */int) max((((/* implicit */long long int) var_13)), (min((((long long int) var_14)), (min((((/* implicit */long long int) var_14)), (-1049549195284594261LL)))))));
    }
    var_26 -= ((/* implicit */unsigned short) var_7);
    var_27 = var_15;
}
