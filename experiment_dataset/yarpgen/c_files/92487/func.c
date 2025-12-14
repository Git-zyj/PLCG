/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92487
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_15 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)65535))))) ? (arr_1 [(signed char)2] [(signed char)2]) : (((arr_1 [(unsigned short)8] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) (short)-6)))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) arr_3 [i_3]);
                                var_17 = ((/* implicit */_Bool) ((((arr_11 [i_0]) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) (signed char)25)))) << (((/* implicit */int) arr_11 [i_0]))));
                                var_18 &= ((unsigned int) arr_14 [i_0] [(unsigned short)2]);
                                arr_16 [i_0] [i_0] [i_2 + 1] [i_2] [i_3 - 2] [i_2 + 1] = ((((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)123)))), (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((var_9) ? (((((/* implicit */_Bool) var_13)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19363))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (unsigned short)13461))))))) : (((((/* implicit */_Bool) (short)-20950)) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_3 - 3] [i_2] [i_1] [i_0]))))));
                                var_19 = ((/* implicit */unsigned char) arr_14 [i_4] [i_4]);
                            }
                        } 
                    } 
                    var_20 -= ((/* implicit */signed char) ((_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-20)) == (((/* implicit */int) var_7))))) <= (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_1] [(signed char)15] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((2141567911U) - (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_7 [i_6])))))));
                                var_21 = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_2] [(signed char)9] [i_6]);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_3))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (signed char)-121))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (signed char i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    {
                        arr_33 [i_8] [i_8] |= ((/* implicit */unsigned long long int) (signed char)-124);
                        var_23 = ((/* implicit */unsigned char) arr_18 [i_7] [i_9 + 4]);
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) ((short) (!(((/* implicit */_Bool) ((signed char) var_7))))));
    var_25 = ((/* implicit */unsigned char) var_1);
}
