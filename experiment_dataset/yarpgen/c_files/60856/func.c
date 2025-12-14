/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60856
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
    var_15 = ((/* implicit */_Bool) (-(((unsigned int) ((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))))));
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(var_11)))), (((unsigned char) var_9))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) (_Bool)1))), (((((/* implicit */int) arr_3 [i_1 + 2] [i_3 + 1])) >> (((((/* implicit */int) var_2)) - (190)))))));
                                arr_16 [i_0] [i_1] [(short)3] [i_3] [i_2] = var_13;
                                arr_17 [i_2] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_10 [i_0] [(signed char)0] [2U] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_2)))) >> (((18446744073709551604ULL) - (18446744073709551589ULL)))))) ? (((((/* implicit */_Bool) (signed char)-111)) ? (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                                var_18 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_8 [i_0] [i_1 + 4] [i_2])) - ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] = ((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(short)8] [i_0]);
                arr_19 [(unsigned short)15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) ^ (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_5 [i_0] [13])), (arr_8 [(short)6] [i_1] [(short)6])))), (((unsigned long long int) var_13))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            {
                arr_26 [i_5] [i_5] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                arr_27 [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_5] [i_5]))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_6] [i_6 + 2] [(_Bool)1] [(_Bool)1] [(unsigned char)14] [(unsigned char)14])), (10875611040484047538ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_12))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 + 1])) ? (((/* implicit */int) (unsigned short)8660)) : (((/* implicit */int) var_0))))) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_5] [i_6 - 1] [i_5] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_8)))) >= (((/* implicit */int) var_8)))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_22 [i_8] [i_6 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_14)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56885))) - (((var_11) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(signed char)8] [i_6] [(_Bool)1] [i_8])))))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_20 [i_6] [i_6 + 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) && (((/* implicit */_Bool) (~(((unsigned int) arr_25 [i_5] [i_6] [i_7]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 *= ((/* implicit */_Bool) var_14);
}
