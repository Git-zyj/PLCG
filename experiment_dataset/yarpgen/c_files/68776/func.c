/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68776
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
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [(short)13] = ((/* implicit */_Bool) max((-1100080167), ((+(min((-1100080167), (((/* implicit */int) var_1))))))));
        arr_3 [i_0] = (unsigned short)22862;
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 9860104790050189822ULL)) ? (2400346504863490613ULL) : (((/* implicit */unsigned long long int) 288230376151711743LL))))));
            var_13 += ((/* implicit */signed char) (unsigned char)58);
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)42)) - (-1100080159))) - (((/* implicit */int) min(((unsigned char)45), (((/* implicit */unsigned char) (signed char)20)))))))) ? (((((/* implicit */_Bool) (((-2147483647 - 1)) - (-1100080164)))) ? (((/* implicit */int) min((var_1), (var_6)))) : ((+(((/* implicit */int) var_6)))))) : (((/* implicit */int) (unsigned char)32))));
        }
    }
    var_14 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_2))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_7)))) ? ((-(((((/* implicit */_Bool) 1100080157)) ? (31ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7)))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((_Bool) (unsigned char)153))), (min((var_5), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2] [i_2])) / (((/* implicit */int) (short)960))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7397078106516530876LL)) ? (((/* implicit */int) (short)-4633)) : (((/* implicit */int) var_9))))) : ((~(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) && (((/* implicit */_Bool) ((long long int) (short)24))))))))))));
    }
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [i_4] = ((/* implicit */unsigned int) var_3);
                    arr_20 [(signed char)5] [i_3] [i_4] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)110))))) ? (((/* implicit */int) arr_12 [i_4] [i_4])) : (((((/* implicit */_Bool) -1100080170)) ? (((/* implicit */int) arr_12 [i_3] [(unsigned short)12])) : (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    } 
}
