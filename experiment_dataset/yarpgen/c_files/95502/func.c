/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95502
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */long long int) arr_0 [i_0]);
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) 384965655))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 13; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 16; i_5 += 4) 
                    {
                        var_16 ^= ((/* implicit */unsigned short) var_5);
                        arr_17 [i_2 - 2] [14LL] [i_4] [i_5] |= ((/* implicit */_Bool) (+(((((/* implicit */int) (short)1555)) / (((/* implicit */int) min((((/* implicit */short) (signed char)-61)), ((short)1570))))))));
                    }
                    arr_18 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-1555)))) - ((-(0)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 2; i_6 < 14; i_6 += 4) 
                    {
                        var_17 = ((/* implicit */int) arr_14 [i_2 - 1] [7] [i_2 - 1] [i_2 - 1]);
                        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */int) (short)-1552)) : (((/* implicit */int) (short)1552)))) | (((((/* implicit */_Bool) (short)1567)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-1528))))));
                    }
                    for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)127)) < (674290443)));
                        arr_24 [i_2] [(signed char)13] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (11311198198933472074ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-1561)) && (((/* implicit */_Bool) (unsigned short)35732))))))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_0 [i_3]))))));
                        var_20 = ((/* implicit */_Bool) arr_6 [i_2 + 4] [i_2]);
                    }
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (3933509546U) : (((/* implicit */unsigned int) 1318179744))))) || (var_1)));
}
