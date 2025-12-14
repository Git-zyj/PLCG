/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82243
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (short)24922)) ? (11220107275618941674ULL) : (((/* implicit */unsigned long long int) 943888128U))))))) ? (((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)16128))))) ? ((~(((/* implicit */int) (short)-24916)))) : (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((((/* implicit */_Bool) 581637754U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255))) : (581637754U))))))));
    var_20 |= ((/* implicit */int) (_Bool)0);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0 + 2] |= ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-60))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_8 [i_2] [(signed char)22] [(unsigned short)12]))));
                        var_22 = ((/* implicit */int) 4294967295U);
                    }
                } 
            } 
        } 
        var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-60))) : (arr_4 [i_0] [23U] [i_0])))) : (arr_11 [(_Bool)1]));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min(((!(arr_14 [i_4]))), (arr_9 [i_4] [i_4] [i_4]))))) % (((((/* implicit */_Bool) max((((/* implicit */int) arr_9 [i_4] [i_4] [i_4])), (arr_1 [i_4] [i_4])))) ? (((((/* implicit */_Bool) arr_7 [(unsigned short)6] [i_4])) ? (((/* implicit */long long int) 224775360U)) : (arr_11 [(signed char)18]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54606))))))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((arr_12 [(unsigned short)10] [i_4] [i_4] [i_4]), (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (arr_2 [i_4])))))))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(3112139996U)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (var_13)))) : (var_16))) : (((((/* implicit */_Bool) (unsigned short)65522)) ? (min((2262046251U), (((/* implicit */unsigned int) var_4)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((182011802) >= (((/* implicit */int) var_7))))))))));
    var_27 += ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) ((int) 72053195991416832LL))))));
}
