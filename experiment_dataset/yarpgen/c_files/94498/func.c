/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94498
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
    var_13 |= ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
    var_14 = var_12;
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), ((unsigned short)0)))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_12)))))) : (((/* implicit */int) (short)28557))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (+(343592077087497692ULL))))) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)45871))));
        var_17 ^= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) 6637818949652727763LL)), (min((8955521229493393027ULL), (((/* implicit */unsigned long long int) var_12)))))) != (((/* implicit */unsigned long long int) -3648236031316630143LL))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 3; i_3 < 11; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (unsigned char)90))));
                        var_19 = (+(17429525435303265129ULL));
                    }
                } 
            } 
            arr_15 [i_1 + 1] = ((/* implicit */long long int) (_Bool)1);
            arr_16 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_0);
        }
        for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5] [i_1 - 3] [i_1])))))));
            arr_19 [i_1] = ((/* implicit */short) var_8);
            arr_20 [i_5] [i_1 - 1] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (510811196)));
        }
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) 
        {
            for (unsigned char i_7 = 2; i_7 < 13; i_7 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_6 - 3])))))));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((unsigned long long int) (_Bool)1)))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) (+(-3835175646415541536LL)))), (((((/* implicit */_Bool) 2893523212U)) ? (15765548345570978029ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))));
}
