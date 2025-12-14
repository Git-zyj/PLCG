/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82366
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-30414)) / (((/* implicit */int) ((((/* implicit */int) (short)-30414)) > (((/* implicit */int) (short)-30430)))))))) ? (((((/* implicit */_Bool) 9197218389519511107LL)) ? (min((((/* implicit */unsigned long long int) arr_4 [i_0])), (arr_5 [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [i_2 - 4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [8] [i_1] [i_1])), (arr_4 [(signed char)5]))))) / (arr_8 [i_0] [i_1] [i_1 + 1] [i_1 + 1]))))));
                    var_17 = ((/* implicit */signed char) arr_8 [i_1 + 1] [i_1 + 1] [i_2 + 2] [i_2 - 3]);
                    arr_10 [i_2] |= ((/* implicit */long long int) max((38247778U), (((/* implicit */unsigned int) (_Bool)1))));
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) (~(1351346234)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */int) var_4))))))) | (((((/* implicit */_Bool) max((var_13), ((short)22311)))) ? ((+(38247778U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10463)))))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            {
                arr_18 [i_3] [i_3] [12] = ((/* implicit */int) (short)-23043);
                var_19 = arr_13 [i_3];
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) max((max(((-(-1395744314))), (((((/* implicit */int) (unsigned short)35160)) / (((/* implicit */int) (short)-30119)))))), (((/* implicit */int) arr_24 [i_3] [i_5 - 2] [i_5] [i_4])))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)31))))) > (((/* implicit */int) ((short) arr_26 [i_3] [14ULL] [i_4 + 1] [i_6] [i_5 + 1] [20LL])))));
                            arr_27 [i_3] [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) ((1369959647) <= (((/* implicit */int) arr_17 [i_5 - 1] [i_4 + 1] [i_4 + 1]))));
                            arr_28 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33556)) ? (((/* implicit */int) (short)16384)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((((/* implicit */int) min((arr_14 [i_6]), (arr_14 [i_3])))) != (((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_4 - 1] [(signed char)4] [i_4 - 1] [10U])) ? (arr_22 [(signed char)14] [i_3] [6LL] [i_3]) : (((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */int) var_16))));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_24 [i_3] [i_4] [i_3] [i_6])), (max((arr_23 [i_3] [i_4] [(short)5] [(unsigned char)19]), (((/* implicit */short) var_0)))))))) & (((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-19604))))) : (max((var_9), (((/* implicit */long long int) arr_16 [i_3] [i_3])))))))))));
                        }
                    } 
                } 
                arr_29 [i_3] [i_4] = ((/* implicit */long long int) max((max((((/* implicit */short) (signed char)-2)), ((short)6450))), (((/* implicit */short) min(((signed char)-3), ((signed char)64))))));
            }
        } 
    } 
}
