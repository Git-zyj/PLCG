/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69965
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((_Bool) min((((/* implicit */int) var_10)), (var_18)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_13 [i_0 + 3] [i_0] [i_0] [(_Bool)1] [i_0 + 1] [i_0] = ((/* implicit */short) ((((((2147483647) / (var_5))) / (-1089243227))) <= (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)17))))) ? (var_2) : (((/* implicit */int) arr_1 [(short)12] [i_0]))))));
                        var_20 *= ((/* implicit */unsigned char) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((var_15) - (4249427779869130639LL)))));
                        var_21 |= ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 1089243223))) + (((((/* implicit */_Bool) arr_8 [(_Bool)0] [i_3])) ? (var_18) : (((/* implicit */int) (short)(-32767 - 1)))))))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_2])))) : (((((/* implicit */_Bool) -1089243227)) ? (((/* implicit */int) var_8)) : (var_5))));
                        arr_14 [i_0 + 2] [i_1] [i_0] = ((/* implicit */unsigned short) 1089243227);
                        var_22 |= ((/* implicit */unsigned short) arr_5 [i_0] [i_0 - 1]);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_4 = 2; i_4 < 24; i_4 += 2) 
    {
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            {
                arr_21 [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (((long long int) (+(var_18))))));
                var_24 = ((/* implicit */unsigned short) var_11);
            }
        } 
    } 
    var_25 = ((((((/* implicit */int) var_10)) - (((/* implicit */int) var_10)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(1780116511583062478ULL))))))));
}
