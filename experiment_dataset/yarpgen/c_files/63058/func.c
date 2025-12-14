/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63058
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (((-(var_0))) % (((/* implicit */long long int) arr_1 [i_0 + 3]))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (+(var_4))));
        arr_4 [(_Bool)1] [i_0] = ((/* implicit */signed char) (_Bool)0);
        arr_5 [15] [i_0 + 3] = ((/* implicit */signed char) (~(var_3)));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((min((var_2), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (~(var_6)))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))), (var_7))))));
                    arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(max((var_7), (((/* implicit */long long int) var_9))))));
                }
            } 
        } 
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 756261220)) : (14264750124291032717ULL)))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-125))))) / (arr_10 [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (signed char)125))))) || (((/* implicit */_Bool) var_2))))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
            {
                {
                    arr_22 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_9 [i_4])))))))));
                    arr_23 [i_4] [i_4] = (+(max((((int) var_2)), (((/* implicit */int) (short)24445)))));
                    arr_24 [(unsigned char)11] [(unsigned char)11] [i_4] [(unsigned char)11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_20 [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 3])))));
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        arr_28 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_26 [i_6] [i_6]) + (9223372036854775807LL))) >> (((unsigned long long int) arr_27 [i_6] [(_Bool)1]))))) ? (((/* implicit */int) (unsigned char)100)) : (var_4)));
        arr_29 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) arr_25 [i_6] [i_6]))))) ? (((unsigned long long int) var_1)) : (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_3)) : (var_2))) | (((/* implicit */unsigned long long int) arr_25 [i_6] [i_6]))))));
        arr_30 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_26 [i_6] [i_6])))) ? (((unsigned long long int) arr_27 [i_6] [i_6])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)125)) ? (var_3) : (((/* implicit */unsigned int) -1014004383)))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                for (signed char i_10 = 0; i_10 < 22; i_10 += 2) 
                {
                    {
                        arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((+(2444974117628250572LL))) : (((/* implicit */long long int) arr_25 [(signed char)21] [i_7]))));
                        arr_43 [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) ((long long int) var_10));
                    }
                } 
            } 
        } 
        arr_44 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */int) (short)-24446)) : (((max((((/* implicit */int) (signed char)4)), (var_5))) / (((/* implicit */int) (unsigned short)30329))))));
    }
    /* vectorizable */
    for (unsigned int i_11 = 3; i_11 < 20; i_11 += 3) 
    {
        arr_47 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_27 [i_11 - 3] [i_11 - 1])) : (((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 4; i_12 < 18; i_12 += 2) 
        {
            arr_50 [i_11] [i_12 - 3] = ((/* implicit */unsigned long long int) var_6);
            arr_51 [i_11 - 1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)5)) >= (((/* implicit */int) arr_34 [i_11 - 3]))));
            arr_52 [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) (signed char)125)) ? (var_2) : (((/* implicit */unsigned long long int) var_4)));
        }
    }
    var_11 = ((/* implicit */unsigned short) var_10);
}
