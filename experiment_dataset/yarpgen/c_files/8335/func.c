/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8335
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
    var_19 = ((/* implicit */unsigned short) min((var_3), (((/* implicit */long long int) var_4))));
    var_20 = var_18;
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)23854)) : (((/* implicit */int) (unsigned short)45061)))) | (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))))) : ((((~(7944176992656175016ULL))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) | (var_13)))))));
        var_21 = ((/* implicit */unsigned long long int) 1686317351U);
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */signed char) (~((~(arr_4 [i_1] [i_1] [i_1])))));
            var_22 &= ((((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (18446744073709551615ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) >> (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (2608649944U) : (2858671862U)))) || (((((/* implicit */int) var_4)) <= (((/* implicit */int) var_18))))))));
            arr_7 [i_1] [i_1] [i_1] = 2608649937U;
            arr_8 [12U] = ((/* implicit */int) 4459033048352763970ULL);
            arr_9 [i_1] [i_1] [5] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_14))))), (min((arr_1 [i_1]), (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) ((1686317351U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51671))))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((signed char) (-(3000291935U)))))));
                            arr_21 [i_0] [i_2] [i_0] [i_2] [i_5 + 2] = ((/* implicit */unsigned int) ((long long int) (-(1686317332U))));
                        }
                    } 
                } 
            } 
            arr_22 [i_0] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-20275))) + (4294967289U)))) ? (arr_10 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-20268))));
            var_24 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_17)))));
        }
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_25 = (+(1686317349U));
        arr_26 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1294675354U)) : (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)31884)) ^ (((/* implicit */int) (unsigned char)56))))) : ((-(3272932828U)))));
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_3))));
    }
}
