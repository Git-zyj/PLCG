/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98615
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1 - 1])) || (((/* implicit */_Bool) arr_6 [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [6] [i_3] [i_4] &= ((/* implicit */unsigned long long int) (_Bool)0);
                                arr_15 [i_2] [i_1] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] = ((_Bool) arr_12 [i_0] [i_1 - 1] [i_2] [i_3 + 3] [i_3 - 1]);
                                arr_16 [i_2] [i_2] = ((/* implicit */short) (~(-1432378409)));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_10 = ((/* implicit */unsigned long long int) max((var_10), (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)(-127 - 1))), (arr_9 [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((int) var_0))) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) == (638909655U)))))))))));
                    var_11 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? ((+((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [(unsigned char)18]))) : (arr_2 [i_5] [13]))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_20 [8LL] [i_1 - 1])) ? (((/* implicit */int) (unsigned short)56994)) : (((/* implicit */int) var_7)))), (arr_3 [i_1 - 1] [i_1 - 1]))))));
                    var_12 = ((/* implicit */int) ((short) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                    arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5] [i_1 - 1])) ? (((/* implicit */int) arr_20 [i_5] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) min((arr_20 [i_5] [i_1 - 1]), (arr_20 [i_5] [i_1 - 1]))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned char) (signed char)-96);
                    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) 3670016LL)) ? (((/* implicit */int) var_2)) : (arr_3 [i_0] [(_Bool)1])))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-55)))) : (((arr_3 [i_0] [i_1 - 1]) | (var_8))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) (((((+(var_8))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
                                arr_30 [(_Bool)0] [i_1] [i_6] [i_7] [(unsigned short)14] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                                arr_31 [i_0] [(_Bool)1] [(short)10] [i_7] [(signed char)6] [i_8] [i_7] = ((/* implicit */int) (((_Bool)1) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                }
                arr_32 [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15457005356084733780ULL)))))) + (18446744073709551607ULL)))));
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned int) (-((+(((/* implicit */int) var_1))))))) | (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (305770033U))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) - (((((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned short)24626)))) + (((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)1))))))));
    var_18 = (+(((/* implicit */int) (unsigned short)40910)));
}
