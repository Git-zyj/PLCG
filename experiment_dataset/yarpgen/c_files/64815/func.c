/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64815
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned char)22] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((arr_3 [i_1 - 1] [i_1 - 1]), (arr_5 [i_1 + 3] [i_1 + 2] [i_1 + 2])))), (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned char) arr_10 [i_4] [12ULL] [12ULL] [18] [18]))))) ? (max((var_3), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4 - 1])) : (((/* implicit */int) (unsigned char)84)))))))));
                                var_19 = ((/* implicit */int) max((var_19), (((((((/* implicit */int) (short)-27094)) <= (((/* implicit */int) arr_3 [i_4 + 1] [i_1 + 3])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_7 [i_1 - 1] [i_1 - 1] [i_1 + 1] [2LL] [i_1 - 1] [i_1])), (max((var_4), (arr_4 [i_1] [i_2] [i_4])))))) : ((~(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) arr_10 [i_1] [20LL] [i_2] [i_1 - 1] [20LL]))))) ? (((/* implicit */int) ((signed char) (short)-25123))) : (((/* implicit */int) max(((unsigned char)241), (((/* implicit */unsigned char) arr_10 [i_0] [i_1 + 2] [i_2] [i_1 - 1] [i_2])))))));
                    arr_14 [i_0] [i_1] [i_1 + 2] [i_2] = ((/* implicit */signed char) arr_2 [20LL]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned char i_7 = 4; i_7 < 21; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((max((((int) (unsigned char)0)), (((/* implicit */int) ((short) arr_2 [13ULL]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_7 + 1]))))))))));
                    var_22 = ((/* implicit */unsigned char) arr_3 [i_5] [i_7]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((short) var_15));
}
