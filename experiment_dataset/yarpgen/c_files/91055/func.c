/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91055
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
    var_17 |= ((/* implicit */short) ((((((/* implicit */_Bool) min((var_12), (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (min((((/* implicit */unsigned long long int) (unsigned short)15821)), (var_5))))) / (((/* implicit */unsigned long long int) var_13))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_8);
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30105)) ? (var_14) : (((/* implicit */unsigned long long int) -1817166872))))) ? (min((((/* implicit */int) (unsigned short)54566)), (2147483647))) : (((/* implicit */int) var_10)))) >= (((/* implicit */int) (_Bool)0))));
                        arr_13 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4116052104398431003ULL)) ? (((/* implicit */int) (unsigned short)18354)) : (((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 3])) <= (((((/* implicit */int) var_7)) | (((/* implicit */int) (signed char)82)))))))));
                        arr_14 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) (unsigned short)13741)), (((((/* implicit */_Bool) (short)14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_9 [(unsigned short)10] [i_2]))))))));
                    }
                } 
            } 
        } 
        var_21 |= ((/* implicit */short) max((((((/* implicit */int) arr_11 [i_0] [i_0])) ^ (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0] [i_0] [i_0]))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned short)6] [(signed char)10])) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned short) ((min((((arr_15 [i_4] [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16200))))), (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) && (((/* implicit */_Bool) (short)19334)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_16), (arr_15 [i_4] [i_4]))))))) : ((+(((/* implicit */int) (short)-19317))))));
        arr_18 [i_4] = ((/* implicit */short) var_13);
    }
    var_22 = ((/* implicit */int) var_4);
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max(((short)19316), (((/* implicit */short) min(((signed char)-25), (((/* implicit */signed char) (_Bool)1))))))))));
}
