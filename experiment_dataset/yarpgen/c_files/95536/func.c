/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95536
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
    var_17 -= ((/* implicit */long long int) ((((((/* implicit */int) ((_Bool) (short)-25626))) / ((+(((/* implicit */int) (unsigned short)15)))))) == ((-(((/* implicit */int) var_8))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) (~((~(((/* implicit */int) var_12)))))));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (unsigned short)25)) : (((/* implicit */int) ((short) 6232198277697105238LL)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((long long int) (unsigned char)162)))));
                                arr_13 [(short)14] [(short)14] [i_2] [(short)14] [(_Bool)0] = ((/* implicit */short) ((((/* implicit */int) (((~(((/* implicit */int) var_8)))) >= (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_16)))))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                arr_14 [(unsigned short)15] [i_3 + 3] [i_2] [i_1] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-6983))))) : (((((/* implicit */_Bool) (short)-16551)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_15)))))));
                                arr_15 [i_0] [i_1] [i_0] [(unsigned short)12] [(unsigned short)6] [i_0] [i_0] = ((/* implicit */unsigned char) ((((6232198277697105231LL) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6613826234975483339LL)))))))) ? (min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) var_8)))) : (min((((/* implicit */int) (short)-16551)), ((+(((/* implicit */int) (short)-25626))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_9);
}
