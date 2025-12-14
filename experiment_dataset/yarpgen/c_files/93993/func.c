/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93993
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
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [5ULL] [2U] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_3 [i_0] [i_1])))), (((/* implicit */int) (unsigned short)12723))));
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 4; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [(unsigned char)9] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) (short)3584)), (((var_10) | (((/* implicit */unsigned int) var_4)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_6 [0ULL] [i_1]))))))));
                                var_16 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned long long int) var_3)) * (arr_5 [i_4] [i_4 - 3] [i_3 + 1]))));
                                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_12)) < (((/* implicit */int) arr_3 [i_0] [i_1])))) ? (max((18446744073709551608ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)10))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) var_0);
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (signed char i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_21 [i_0] [i_6] [i_1] [(short)19] [i_2] [i_5] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [i_5] [i_6]))));
                                arr_22 [i_0] [i_6] = ((/* implicit */unsigned int) max((18446744073709551609ULL), (((/* implicit */unsigned long long int) var_4))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)32119)))))));
                            arr_29 [12U] [i_7] [(unsigned char)5] [i_7] [(signed char)0] = ((/* implicit */unsigned long long int) (~(max(((-(((/* implicit */int) (short)-11066)))), (((((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_7] [i_8])) ^ (((/* implicit */int) var_12))))))));
                            var_20 = ((/* implicit */int) (_Bool)0);
                            arr_30 [i_0] [i_1] [i_7] = ((((/* implicit */_Bool) max((arr_17 [i_0]), (arr_17 [i_0])))) ? (((/* implicit */unsigned long long int) (~(((arr_25 [14LL] [i_0]) ^ (arr_1 [i_0] [i_0])))))) : ((+((~(arr_9 [(signed char)18] [(signed char)18] [i_1] [i_7] [i_8]))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) (_Bool)0);
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((int) min((-1917742870), (var_7)))), (((/* implicit */int) arr_28 [(unsigned short)4] [i_1] [(unsigned short)5] [i_0])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_0);
    var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(var_11)))))) ? (max((((/* implicit */int) ((unsigned char) var_14))), ((-(((/* implicit */int) var_9)))))) : (var_7)));
}
