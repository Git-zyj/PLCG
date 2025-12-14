/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86252
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
    var_12 = ((/* implicit */unsigned short) -4LL);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 7; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_12 [(unsigned short)1] [i_3 - 1] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_9))))))) < (((/* implicit */int) arr_10 [i_0]))));
                                arr_13 [(unsigned short)5] [1ULL] [i_2] [1ULL] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned short)37741)), (min((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) var_4))))), (max((-5LL), (((/* implicit */long long int) var_3))))))));
                                arr_14 [i_4] [i_3] [i_2] [i_2] [i_1 + 1] [i_0] = ((/* implicit */signed char) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32549)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)59646))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [5ULL] [i_2]))) ^ (var_8))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)12516)) || (((/* implicit */_Bool) (short)-12519)))))));
                                arr_15 [i_2] [i_4] [i_3] [i_2] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned short) arr_1 [i_1 - 2] [i_1 + 3]))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_6 [i_3 + 4] [(unsigned short)9] [i_1 + 2] [i_1 + 3])))));
                                arr_16 [i_0] [3U] [i_4] [i_3 - 2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27766))) : (var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */long long int) var_9)) == (var_5))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_23 [i_6 + 1] [4ULL] [i_0] [(unsigned char)10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_5))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)11161), ((short)-11149))))) : (((((/* implicit */_Bool) arr_22 [7ULL] [i_6] [i_6 - 1] [i_1 - 2])) ? (var_8) : (((/* implicit */long long int) arr_22 [i_6 + 1] [i_6] [i_6 - 2] [i_1 - 1]))))));
                                arr_24 [i_6] [i_5] [(signed char)10] [i_1 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((max((-2110954867), (((/* implicit */int) var_1)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) 513578159)) | (3919716253806626618LL)))) ? (((/* implicit */long long int) ((2132630478) ^ (((/* implicit */int) (short)-23411))))) : (8435265229242663318LL))) : (max(((+(4135635987695402533LL))), (min((var_8), (((/* implicit */long long int) var_4))))))));
                                arr_25 [i_6] [i_5] [i_5] [i_0] [i_1 - 2] [i_1] [i_0] = min((((/* implicit */long long int) ((unsigned int) var_6))), (((((/* implicit */_Bool) var_11)) ? (arr_6 [i_6] [i_6 - 1] [i_6 - 2] [i_1 + 2]) : (arr_20 [i_6 - 2] [i_6 - 2] [i_6 + 1] [i_6 + 1] [i_1 - 1]))));
                                arr_26 [(short)0] [(short)0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_22 [i_6 - 2] [i_6 - 2] [i_1 + 2] [i_1])) ? (arr_22 [i_6 + 1] [i_1 + 2] [i_1 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12425))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (int i_8 = 3; i_8 < 8; i_8 += 2) 
                        {
                            {
                                arr_32 [i_0] [i_1] [i_8] [i_2] [i_8] [i_1] [i_0] = ((/* implicit */short) (+((+(((/* implicit */int) var_11))))));
                                arr_33 [i_8] [i_7] [i_8] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 1])))) ? (min((((/* implicit */int) arr_0 [i_8 + 3] [i_1 + 2])), (((((/* implicit */int) arr_31 [i_8])) % (((/* implicit */int) (short)11161)))))) : (((/* implicit */int) (short)-32550))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
