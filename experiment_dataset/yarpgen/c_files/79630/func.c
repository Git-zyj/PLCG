/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79630
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
    var_20 = ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) >= (((((/* implicit */_Bool) (unsigned short)45559)) ? (((/* implicit */long long int) var_6)) : (var_16))))) ? (((/* implicit */int) ((((((/* implicit */int) (short)-3857)) - (((/* implicit */int) var_14)))) != (((/* implicit */int) var_9))))) : (((/* implicit */int) ((short) ((short) var_19)))));
    var_21 = ((/* implicit */unsigned char) ((int) 1747778529));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 575447479)) ? (((/* implicit */int) (short)16)) : (((/* implicit */int) (unsigned char)131))));
    var_23 = ((/* implicit */signed char) var_16);
    /* LoopSeq 3 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 - 4])) / (((/* implicit */int) ((signed char) 1230960705U)))));
            arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */int) (signed char)11)) == (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_15))))));
            arr_7 [i_1] [i_0 - 4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 - 4] [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_11)))))));
        }
        arr_8 [i_0] [i_0] = ((/* implicit */long long int) max(((((+(((/* implicit */int) arr_2 [i_0] [i_0 - 4])))) | ((-(((/* implicit */int) (short)-23455)))))), (((/* implicit */int) ((((-4641001958206023940LL) | (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) < (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_9 [i_0 - 1] = ((/* implicit */short) (~((+(((long long int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_11 [i_2 - 2])))) >= (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) var_7)) : (arr_11 [i_2 - 2])))));
        arr_13 [i_2] = ((/* implicit */unsigned short) ((signed char) arr_10 [i_2 + 2]));
        arr_14 [i_2 - 2] [i_2] = ((/* implicit */_Bool) ((int) var_1));
        arr_15 [i_2 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_4))))) ? (var_7) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)104))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 22; i_3 += 2) /* same iter space */
    {
        arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-3853))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    {
                        arr_27 [i_3] [i_3 - 2] [i_4] [i_5 + 1] [i_6] [i_4] = ((/* implicit */unsigned short) (short)23454);
                        arr_28 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */int) arr_24 [i_6]);
                    }
                } 
            } 
        } 
    }
}
