/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67315
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -415499804)) ? (15163886188099712516ULL) : (((/* implicit */unsigned long long int) 415499804)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -415499804)) && (((/* implicit */_Bool) -415499804)))))));
        var_12 = ((/* implicit */short) (+(arr_0 [i_0])));
    }
    for (int i_1 = 3; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_13 = min(((short)-5106), (((/* implicit */short) (!((!((_Bool)1)))))));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) (short)-6699);
            var_15 = ((/* implicit */int) (((_Bool)1) ? (10114147953851764874ULL) : (200608106910583416ULL)));
            var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)22846)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)23413))))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (short)-28240)))))));
            var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65024))));
            var_18 = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        }
        for (int i_3 = 1; i_3 < 23; i_3 += 1) 
        {
            var_19 += ((/* implicit */int) (short)0);
            var_20 = ((/* implicit */unsigned short) max(((short)8227), ((short)-1)));
            /* LoopNest 2 */
            for (short i_4 = 3; i_4 < 23; i_4 += 2) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [(short)2] [i_3] [i_3] [i_1]))))) * (((((/* implicit */_Bool) (short)-3300)) ? (18107488045021700976ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1 + 1]))))))));
                        var_22 = ((/* implicit */unsigned long long int) (-((-(max((1447337255U), (((/* implicit */unsigned int) (unsigned short)512))))))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (((_Bool)1) ? (415499804) : (2147483647))))));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (short)-9148))))) ? ((+(9127971137454933812ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) : (((/* implicit */unsigned long long int) 4294967295U))));
    }
}
