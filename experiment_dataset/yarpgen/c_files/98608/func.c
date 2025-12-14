/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98608
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) | (arr_2 [16U]))))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - ((~(((/* implicit */int) arr_0 [16U] [16U])))))))));
        var_18 = min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (min((arr_1 [i_0]), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] &= ((/* implicit */long long int) var_4);
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_19 &= ((/* implicit */_Bool) ((unsigned int) (unsigned char)17));
            var_20 -= max(((+(arr_7 [i_0]))), ((-(arr_7 [i_0]))));
            var_21 = ((/* implicit */_Bool) max((((unsigned int) max((var_16), (((/* implicit */unsigned int) var_13))))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7)))))))));
        }
        for (unsigned int i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            arr_12 [i_2] = max((max(((~(arr_6 [i_2] [19U] [19U]))), ((-(arr_7 [i_0]))))), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_0] [3U]))));
            var_22 = ((/* implicit */_Bool) arr_1 [i_0]);
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_23 = ((1397967749655085343LL) == (((/* implicit */long long int) 0U)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                arr_17 [12LL] [12LL] [0U] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_4])) || (((/* implicit */_Bool) var_17))));
                var_24 = ((/* implicit */unsigned int) min((var_24), (((var_16) << (((((/* implicit */int) var_9)) - (163)))))));
            }
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                arr_20 [i_0] [i_0] [(unsigned char)1] [i_5] = ((((/* implicit */_Bool) var_0)) ? (max((2607933320U), (((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)222))))))) : (((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) var_12))))) ? (arr_10 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8)))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (var_8)));
                arr_21 [13U] = ((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 - 1] [i_3 - 1]))) : (max((var_16), (((/* implicit */unsigned int) arr_0 [i_3 - 1] [(unsigned char)20]))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_26 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_15)))) ? (max((2239945649919431973LL), (((/* implicit */long long int) arr_7 [8LL])))) : (-435466265847081677LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_14 [i_5] [i_5]) : (15U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))))));
                    var_27 = ((/* implicit */_Bool) var_12);
                }
            }
            arr_24 [i_0] [i_3] = arr_23 [i_0] [i_3] [i_3] [i_3];
            arr_25 [i_0] [i_0] [i_0] = ((((var_6) | (((var_15) + (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3646456348U)))));
            var_28 = ((/* implicit */unsigned char) var_11);
        }
        var_29 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    }
    var_30 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (_Bool)0))));
}
