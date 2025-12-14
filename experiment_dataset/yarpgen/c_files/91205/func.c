/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91205
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (short i_3 = 2; i_3 < 20; i_3 += 3) 
                    {
                        {
                            arr_10 [i_2] [i_1] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 1])) ? (arr_2 [(signed char)14] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0])))))));
                            arr_11 [i_0] [i_1] = ((/* implicit */long long int) arr_4 [i_1] [i_2]);
                            arr_12 [i_1] [i_1] [i_1] [4U] = ((/* implicit */int) (+((+((~(14071450597219862732ULL)))))));
                            var_17 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((_Bool) 2147483647))))));
                            /* LoopSeq 2 */
                            for (int i_4 = 1; i_4 < 22; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */int) (unsigned char)56);
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) -19)) ? (max((((/* implicit */unsigned int) arr_0 [i_2])), (239948823U))) : (min((((/* implicit */unsigned int) arr_5 [i_1] [i_1 - 3] [i_3 - 2])), (arr_7 [i_1] [i_1 - 3] [i_3 - 2] [i_4 - 1] [i_4 - 1])))));
                                var_20 &= arr_7 [i_0] [i_1] [i_2] [i_3] [i_1];
                            }
                            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-84)), (var_15)))), (((0U) + (arr_1 [i_0] [i_0])))))) ? (min((((/* implicit */unsigned int) ((int) var_15))), (((unsigned int) (signed char)-60)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_3 + 1] [i_1 + 1])))))));
                                var_22 = ((/* implicit */signed char) ((((arr_17 [i_1] [i_1] [i_1] [(unsigned char)20] [17] [i_1] [i_1]) >= (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) ? (min((arr_1 [i_0] [i_3 + 3]), (arr_1 [i_0] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28)))));
                            }
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 3) 
                {
                    var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_0] [22LL] [i_0]))))) : (-2704877868579660746LL)))))))));
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                }
                var_25 ^= ((/* implicit */int) ((((_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))) : (arr_8 [i_1])))) ? (((arr_14 [(signed char)8]) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [2]))))) : (((/* implicit */long long int) ((min((2507383798U), (1082241946U))) >> (((((long long int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0])) - (1130534151LL))))))));
                var_26 -= ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) -2031835146)), (1875372615U)))));
            }
        } 
    } 
    var_27 = ((/* implicit */long long int) var_10);
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (+(2147483626))))) ? (((/* implicit */unsigned long long int) (-(min((1072693248U), (((/* implicit */unsigned int) var_9))))))) : (var_14)));
    var_29 = min((((/* implicit */signed char) ((max((7495561542581592579ULL), (var_14))) != ((~(var_4)))))), (((signed char) ((((/* implicit */_Bool) var_16)) ? (3321624774U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)132)))))));
}
