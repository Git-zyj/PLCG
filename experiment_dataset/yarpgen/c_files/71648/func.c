/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71648
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) -7117594118274665054LL)) : ((-(var_9)))));
        arr_3 [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (7117594118274665054LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -4112601108728381715LL)) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)0)))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) max((var_16), (min((((/* implicit */long long int) 353753190)), (min((var_16), (((/* implicit */long long int) (unsigned short)0))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_20 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_18), (var_17))))))) ? (((/* implicit */int) (unsigned short)9123)) : (((/* implicit */int) var_18))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_12)) : (16424467845699821245ULL)))) ? ((((!(((/* implicit */_Bool) (unsigned short)0)))) ? ((~(14494121600937442663ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    }
    for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) /* same iter space */
    {
        arr_10 [(unsigned char)1] [(unsigned char)1] = ((/* implicit */unsigned long long int) 996125818U);
        arr_11 [(unsigned short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-7117594118274665054LL), (((/* implicit */long long int) -583170070))))) ? (((/* implicit */int) var_11)) : (-2049733093)))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_16)))) ? ((~(9007199254740990ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-8370594210558097675LL)))))) : (((/* implicit */unsigned long long int) max((-7117594118274665054LL), (((/* implicit */long long int) var_18)))))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_17 [i_2] |= ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (signed char)-124))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(1436173544)))) : (11351962241497644438ULL))));
                    var_21 = ((/* implicit */int) 8566551992617282068LL);
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16)))))));
    var_23 = ((/* implicit */signed char) (unsigned short)253);
}
