/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69504
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
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_18 = ((/* implicit */signed char) ((unsigned long long int) 4627324847996374592LL));
        arr_3 [i_0] = ((/* implicit */unsigned short) (unsigned char)221);
        var_19 = ((/* implicit */long long int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) -4627324847996374592LL)) || (((/* implicit */_Bool) 14001190997058405115ULL))))), (max((var_5), (((/* implicit */long long int) arr_1 [i_0])))))) >= (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)19768)), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2 + 1] [i_0]))) < ((+(4627324847996374582LL)))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 20; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((long long int) 2463960143512741748ULL)) - (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_13 [i_4] [i_3] [(unsigned short)9] [(unsigned short)9] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_0] [6] [6] [i_4])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45436))) : ((+((+(-9223372036854775807LL)))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) arr_13 [i_4 + 1] [i_1 - 1] [(signed char)9] [(signed char)9] [6LL]))))))));
                            arr_14 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */int) arr_0 [i_2])) > (((/* implicit */int) (unsigned short)6910)))) ? (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2] [i_0])) : (14001190997058405128ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775787LL)))))))));
                        arr_15 [i_0] [i_0] [(signed char)1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) max(((+(4445553076651146500ULL))), (((4445553076651146500ULL) << (((-710778227) + (710778268)))))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (((4949738137867866855LL) << (((783248183U) - (783248183U)))))))));
}
