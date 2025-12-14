/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59213
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (unsigned short)27702)) : (var_12))))))) < ((((+(((/* implicit */int) (unsigned short)52818)))) ^ (((((/* implicit */int) (unsigned short)4899)) / (((/* implicit */int) (short)25640))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) 16371224038817464925ULL))));
                    arr_7 [i_1] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) (+(var_8)))) ? (((((/* implicit */_Bool) arr_5 [i_0] [3LL])) ? (((/* implicit */unsigned long long int) 1971501375)) : (16371224038817464925ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))));
                    arr_8 [i_0] [i_1] [i_2] [9LL] = ((/* implicit */unsigned int) ((1525231788) < (((/* implicit */int) (unsigned short)37834))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_3 [i_0]))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_2 + 3] [(short)11] [i_2 - 1])) ? (((((/* implicit */_Bool) 2075520034892086691ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22396))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned char)56)))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (short)22396));
        arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) -5815400111088718265LL))) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_8))))));
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)56))) <= (arr_6 [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (arr_6 [i_0] [i_0])));
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16263)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27704))) : (arr_0 [(unsigned short)6] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_0 [i_3] [i_3])))) ? (((((/* implicit */long long int) var_12)) / (6023660622064099337LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))))))));
        var_18 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25640)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) (unsigned short)36553))))))));
        arr_16 [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned short)36570))))))) & ((+(0ULL)))));
        var_19 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)7894)))) + (((((/* implicit */int) (short)11745)) % (((/* implicit */int) (short)-9401))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((_Bool) var_5))), (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4]))) : (arr_0 [i_4] [i_4])))));
        var_21 = ((/* implicit */short) ((unsigned long long int) (unsigned char)199));
    }
    var_22 *= ((/* implicit */short) var_12);
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) ((((/* implicit */_Bool) 296108622927641870ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11776))) : (16371224038817464926ULL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
