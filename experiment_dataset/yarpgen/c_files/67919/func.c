/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67919
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
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) var_12);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 510953280)) : (1010749868685164082ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_17 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (signed char)104)))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_2] = ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))), ((~(4294967279U))))) >> (((((((/* implicit */int) var_6)) | ((~(((/* implicit */int) var_8)))))) - (7804))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) - (max(((+(((/* implicit */int) var_6)))), (((/* implicit */int) var_2))))));
                            var_19 -= ((/* implicit */signed char) ((max(((-(8958130967676854936LL))), (((/* implicit */long long int) var_2)))) <= (((/* implicit */long long int) (+(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_3))))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11135))) : (8958130967676854936LL)))) ? ((+(((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))));
                arr_14 [i_1] &= var_7;
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_21 += ((/* implicit */short) var_11);
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((((/* implicit */int) (!(var_4)))) == (((/* implicit */int) var_7)))))));
    }
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)8926))));
    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36935)))) >= (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_0))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_14))))))))));
}
