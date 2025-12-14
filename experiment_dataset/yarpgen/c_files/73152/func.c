/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73152
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
    var_13 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (2035401719U) : (528572958U)))) * ((~(9554880831774425723ULL))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)8183)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [7ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (signed char)114))));
                                var_14 = ((/* implicit */int) ((unsigned int) 2259565577U));
                                arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((7ULL) < (((/* implicit */unsigned long long int) 2147482624U)))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) < (((/* implicit */long long int) -923807853)))))) & (arr_14 [i_1] [i_2 + 2] [i_2 + 1] [13ULL] [13ULL] [i_2] [i_2 + 2])));
                            }
                            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
                            {
                                arr_21 [i_5] [i_1] [6] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)11150)), (8323072)))) || (((/* implicit */_Bool) var_9))))), (((((/* implicit */int) ((((/* implicit */unsigned long long int) -15)) >= (1ULL)))) ^ (min((726650662), (((/* implicit */int) (signed char)116))))))));
                                arr_22 [i_3] [(signed char)0] [i_1] = ((/* implicit */int) ((unsigned int) max(((unsigned short)16241), (((/* implicit */unsigned short) (unsigned char)63)))));
                                arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) var_4);
                                var_16 = ((/* implicit */unsigned long long int) ((unsigned short) ((((-2743831323926672684LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_10))))) & (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                                arr_24 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) var_4);
                            }
                            var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1508239676)) ? (-854845771) : (((/* implicit */int) arr_6 [i_0] [i_2 + 3])))) >= (((/* implicit */int) ((((/* implicit */int) (signed char)-20)) > (((/* implicit */int) arr_6 [i_1] [i_3])))))));
                            arr_25 [i_0] [i_1] [(signed char)11] [i_3] = ((unsigned long long int) (-(1552786240U)));
                        }
                    } 
                } 
                var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (var_11) : (((/* implicit */unsigned long long int) 7999448754778378931LL))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
            }
        } 
    } 
}
