/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93725
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (unsigned char)126))));
                            arr_13 [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_6 [i_0 - 1] [i_2 + 2] [i_3 + 1])), (arr_5 [i_0 - 1] [i_1] [i_2 + 3]))))));
                            var_18 = ((/* implicit */long long int) 321032858U);
                        }
                    } 
                } 
                arr_14 [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33673)) | (((/* implicit */int) (short)13218))))) ? (((/* implicit */long long int) ((/* implicit */int) ((16711680U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-14541))))))) : (((-352154966951716974LL) / (((/* implicit */long long int) 3002657071U)))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((long long int) (-9223372036854775807LL - 1LL)))), (((((/* implicit */_Bool) -8146008844890380542LL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1])))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    arr_17 [i_4] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)52711)) ? (((/* implicit */unsigned int) arr_4 [i_0])) : (3556390091U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_11))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_9 [i_0 - 1] [i_0] [i_0 - 1]))) ? (((((/* implicit */_Bool) 2987331030U)) ? (((/* implicit */int) (short)12340)) : (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */int) (signed char)19))));
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                {
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2987331034U)) ? (((/* implicit */int) (unsigned short)7608)) : (((/* implicit */int) var_2))))) : (arr_12 [i_5] [i_1] [i_0 + 1] [i_0 + 1]))))));
                    arr_20 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 321032861U))) ? (((/* implicit */int) ((unsigned short) (unsigned short)20618))) : (((/* implicit */int) ((unsigned char) arr_19 [i_0 - 1] [i_0 - 1] [i_0 + 1])))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            for (unsigned int i_8 = 2; i_8 < 20; i_8 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_29 [i_6] [i_6] [i_6] [i_6]))));
                    var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_28 [(signed char)14] [i_8 + 1] [i_7] [i_7 - 1])), (arr_26 [i_8 + 1] [i_8] [i_7 - 1])))) ? ((-(arr_21 [i_7 + 1] [i_7 + 1]))) : (((/* implicit */unsigned long long int) arr_26 [i_8 + 1] [i_7 + 1] [i_7 + 1]))));
                }
            } 
        } 
    } 
}
