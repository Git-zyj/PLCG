/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91274
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((var_1), (((/* implicit */long long int) var_16)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned short) max(((((~(var_7))) % (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)36), ((unsigned char)36))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)219)) > (((/* implicit */int) min((var_18), ((_Bool)1)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-25612))) : (0U)))) ? (var_5) : (((/* implicit */unsigned long long int) max((arr_2 [i_0 - 1]), (((/* implicit */unsigned int) var_12))))))))));
        var_22 = ((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)132)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))))) || (((/* implicit */_Bool) var_6))));
    }
    for (signed char i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)0)))), (-1))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 3) 
            {
                {
                    var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2] [i_3 - 4])) ? (arr_12 [i_1 - 1] [i_2] [i_3 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                    arr_13 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (~(arr_11 [i_1])));
                    var_25 = ((signed char) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (arr_2 [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))));
                }
            } 
        } 
    }
    for (signed char i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] [2] = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 5715202033164663420LL))))), (((((/* implicit */_Bool) 1448904720U)) ? (((/* implicit */long long int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-102))))) : (((var_1) & (((/* implicit */long long int) ((/* implicit */int) (short)-6863)))))))));
        var_26 *= ((/* implicit */short) var_11);
    }
    for (signed char i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) var_18)) & ((~(((/* implicit */int) (signed char)101)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (signed char)-102))));
                    arr_24 [i_5] [4U] [4U] &= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (((_Bool)1) || (((/* implicit */_Bool) var_3))))))));
                    var_28 -= ((/* implicit */unsigned char) var_9);
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_8] [i_7] [i_6] [i_5 - 1] [i_5 - 1])) ? (min((((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned short) (signed char)-102))))), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) max(((_Bool)1), ((_Bool)1)))), ((unsigned char)255))))))))));
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((unsigned short) var_7)))));
                        var_31 = ((/* implicit */int) max((var_31), (((((/* implicit */_Bool) min((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23976))))), (((/* implicit */unsigned int) (signed char)4))))) ? ((~(((/* implicit */int) (signed char)104)))) : (((/* implicit */int) var_16))))));
                        arr_28 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)4)) - (((/* implicit */int) (short)1442))));
                        arr_29 [i_5] [i_5] [i_6] [i_6] [i_7] [i_8] = ((/* implicit */long long int) (_Bool)1);
                    }
                    var_32 = ((/* implicit */unsigned short) arr_26 [i_6] [i_6]);
                }
            } 
        } 
    }
    var_33 = ((/* implicit */signed char) (+((~((~(((/* implicit */int) (signed char)-1))))))));
}
