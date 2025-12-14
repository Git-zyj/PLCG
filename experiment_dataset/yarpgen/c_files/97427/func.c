/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97427
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        arr_2 [12U] = (short)-4202;
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_3)), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((short) ((int) max((var_8), (((/* implicit */int) var_2))))));
        arr_5 [i_0] [i_0] = (unsigned short)11427;
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1] [i_1]);
        arr_9 [i_1] = ((/* implicit */long long int) arr_1 [i_1] [(unsigned char)3]);
        arr_10 [i_1] = ((/* implicit */unsigned int) ((unsigned short) max((max((var_7), (((/* implicit */unsigned int) (signed char)-123)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65526))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        arr_13 [i_2] [7U] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */long long int) arr_1 [i_2] [i_2])) : (arr_0 [i_2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
        {
            arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned short)65527);
            arr_18 [i_2] [i_3] [i_2] = ((/* implicit */short) arr_14 [i_3 + 2] [i_3 + 1]);
        }
        arr_19 [i_2] = ((/* implicit */signed char) ((((arr_0 [i_2]) >= (6482869692373296024LL))) ? (((/* implicit */int) (short)4185)) : (((/* implicit */int) max(((short)31022), (((/* implicit */short) (signed char)119)))))));
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            arr_30 [i_4] [i_4] [i_4] [11ULL] [14] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8128)) != (((/* implicit */int) (signed char)(-127 - 1)))));
                            arr_31 [2U] [2U] [2U] [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_5 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (max((((/* implicit */unsigned long long int) -898852188)), (arr_20 [i_5 - 1])))));
                        }
                    } 
                } 
            } 
            arr_32 [i_2] = ((/* implicit */short) arr_29 [i_2] [i_4] [i_2] [i_2] [i_4]);
            arr_33 [i_4] = ((((/* implicit */int) arr_23 [i_2] [i_4] [i_4])) < (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_25 [i_4] [i_2] [i_2] [i_2])) : (((/* implicit */int) var_0)))));
        }
        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_44 [i_2] [i_9] [i_8] [(short)7] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (short)-4206))) ? (((/* implicit */int) (short)4209)) : ((+((~(((/* implicit */int) arr_38 [i_10] [i_9] [i_2]))))))));
                        arr_45 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */unsigned char) ((short) arr_0 [i_2]));
                    }
                } 
            } 
            arr_46 [i_2] = ((/* implicit */_Bool) var_9);
            arr_47 [i_2] = ((/* implicit */unsigned short) var_8);
        }
        arr_48 [i_2] [i_2] = ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (short)-4217))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) (unsigned short)65535)), (var_9))));
    }
    var_13 = ((/* implicit */unsigned int) (signed char)-109);
    var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    var_15 = ((/* implicit */_Bool) var_3);
}
