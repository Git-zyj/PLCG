/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96231
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
    var_15 = var_3;
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */signed char) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
            {
                var_17 -= ((/* implicit */unsigned long long int) arr_5 [18] [i_1]);
                arr_7 [i_0] [i_1 + 1] [i_1 + 1] [i_2] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_11)))));
            }
            for (signed char i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
            {
                var_18 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_11))))), ((unsigned char)0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) : (min((arr_4 [(signed char)10] [i_1 - 1]), (((/* implicit */int) max((arr_0 [(unsigned short)3]), (((/* implicit */unsigned short) (short)6619)))))))));
                arr_11 [i_3] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [11U] [i_1 + 1]))))), (arr_8 [i_0] [i_0] [i_3] [i_1 + 1])));
                var_19 -= ((/* implicit */short) ((((int) (unsigned char)243)) >> (((((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) (unsigned char)250)))) - (221)))));
            }
            for (signed char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 16; i_6 += 1) 
                    {
                        {
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (192508851U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 13143034981315355449ULL))))))))) ? (0U) : (((/* implicit */unsigned int) arr_4 [i_5] [6]))));
                            arr_20 [i_1] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (max((((/* implicit */unsigned char) ((signed char) arr_9 [i_0] [i_0] [i_5] [i_6]))), (arr_15 [i_1 - 1])))));
                            var_21 = ((/* implicit */unsigned long long int) max((((unsigned int) ((((/* implicit */_Bool) (signed char)-60)) && (((/* implicit */_Bool) 2147483647))))), (((/* implicit */unsigned int) arr_2 [i_5] [i_6]))));
                        }
                    } 
                } 
                arr_21 [i_0] = ((/* implicit */signed char) arr_19 [i_4] [(unsigned short)5] [i_4] [(unsigned char)3] [i_0]);
            }
            for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                arr_25 [i_1] [i_1] [(_Bool)1] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -395593939)) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_7]))) : (arr_23 [i_0] [i_0] [i_7]))), (((/* implicit */unsigned int) arr_3 [i_1 - 1] [i_1 - 1] [i_1 - 1])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_7])))));
                arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_3))) ? ((~(((/* implicit */int) arr_22 [i_0] [i_0] [i_1 + 1])))) : (max((((/* implicit */int) (short)-91)), (var_2)))));
            }
            var_22 *= ((/* implicit */signed char) ((((/* implicit */int) max((max(((unsigned short)9829), (((/* implicit */unsigned short) (unsigned char)243)))), ((unsigned short)15642)))) % (((/* implicit */int) ((unsigned short) arr_13 [i_1] [i_1] [i_1 + 1] [1ULL])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                for (short i_9 = 1; i_9 < 17; i_9 += 2) 
                {
                    {
                        var_23 += ((/* implicit */int) ((signed char) var_7));
                        arr_31 [i_0] [i_0] [i_8] [i_9 - 1] [i_1] [(unsigned short)13] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)31487))));
                        arr_32 [(unsigned short)18] [i_0] [i_1 + 1] [i_8] [i_8] [i_9 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [(short)0] [i_8] [i_9 - 1])) >> (((var_4) - (2824348082U)))))))))));
                    }
                } 
            } 
        }
        var_24 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (-(2147483644)))) ? (arr_6 [(unsigned char)17] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 26ULL)))))));
    }
}
