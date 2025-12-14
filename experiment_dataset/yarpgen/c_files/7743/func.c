/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7743
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
    var_18 -= ((/* implicit */int) var_5);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((var_9) + (-1981107833)))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))), (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_16)) - (155)))))))) : (((((/* implicit */_Bool) var_5)) ? (((long long int) var_17)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_16))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) var_4)) : (var_13)));
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */short) ((unsigned short) var_5));
                    arr_8 [i_0] [15ULL] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0] [i_0])))));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) 3602938548U));
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((((/* implicit */_Bool) (short)32757)) ? (1613845750) : (((/* implicit */int) (short)-32764)))) : (((((arr_1 [(short)18]) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0])) - (70))))))))));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) min((322657316U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [(_Bool)1] [i_4 + 2] [i_4 + 1])))))));
            var_23 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 17839277873319272436ULL)) ? (((/* implicit */int) (short)32751)) : (((/* implicit */int) (short)32763)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_4] [i_4 + 2] [i_3] [i_3])) : (((/* implicit */int) arr_3 [i_4 + 2]))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14)))) : ((-(var_6)))));
            var_25 -= ((/* implicit */unsigned short) arr_10 [(signed char)16]);
        }
    }
    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
    {
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (arr_2 [i_6] [i_6] [i_6]))))));
        var_26 = ((/* implicit */signed char) var_10);
        arr_23 [i_6] = ((/* implicit */unsigned char) max((-7691467053599885827LL), (((/* implicit */long long int) 2147483647))));
        var_27 = ((/* implicit */unsigned int) var_2);
    }
    var_28 = min((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)32746)))))) != (var_13)))), (var_7));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        for (unsigned short i_8 = 4; i_8 < 15; i_8 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) var_17)) * (((((/* implicit */_Bool) arr_20 [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_4 [i_7] [i_8 + 1] [i_8] [i_8 - 3])) : (((/* implicit */int) ((((/* implicit */int) var_12)) >= (var_9))))))));
                arr_29 [(_Bool)1] [(_Bool)1] [i_7] = ((/* implicit */unsigned short) min((((((/* implicit */int) var_14)) + (((/* implicit */int) var_0)))), (((int) min((((/* implicit */unsigned short) var_14)), (var_3))))));
                arr_30 [(unsigned char)11] = ((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), ((unsigned char)128)))), ((-(var_9)))));
            }
        } 
    } 
}
