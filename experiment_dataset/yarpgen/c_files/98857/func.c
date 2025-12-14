/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98857
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
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (min(((~(((/* implicit */int) var_2)))), (((/* implicit */int) var_8))))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (var_0) : (var_0)));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_14 *= ((/* implicit */unsigned short) (_Bool)0);
        arr_6 [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32767))))) : (((((/* implicit */_Bool) (unsigned short)2901)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1))))), (((/* implicit */unsigned int) max((arr_4 [i_1]), (var_3))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) (((_Bool)1) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    {
                        arr_17 [i_3] [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                        var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)110))));
                        arr_18 [i_3] [i_4] [i_5] = (!(((/* implicit */_Bool) arr_4 [i_3])));
                        arr_19 [i_3] [i_3] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-2761177033677223259LL)));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = ((/* implicit */short) ((signed char) arr_11 [i_2] [i_2] [i_2]));
        arr_21 [i_2] = ((/* implicit */unsigned short) var_8);
    }
    /* LoopSeq 3 */
    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_16 = (short)-17469;
        var_17 = ((/* implicit */_Bool) (unsigned char)1);
    }
    for (unsigned short i_7 = 4; i_7 < 10; i_7 += 2) /* same iter space */
    {
        arr_29 [i_7] [i_7] = (!(((/* implicit */_Bool) var_5)));
        var_18 &= ((/* implicit */short) ((min((((/* implicit */long long int) (_Bool)0)), (arr_25 [i_7] [i_7 - 2]))) + (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_15 [i_7] [(unsigned char)4] [i_7] [i_7 + 3] [i_7 + 3])))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 4; i_8 < 10; i_8 += 2) /* same iter space */
    {
        arr_32 [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_1)));
        arr_33 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)99)) ? (arr_23 [i_8 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_8])))));
        arr_34 [i_8] = ((short) arr_16 [i_8] [i_8] [i_8]);
    }
}
