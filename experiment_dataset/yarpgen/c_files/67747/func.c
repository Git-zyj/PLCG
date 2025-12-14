/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67747
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_2 [2LL] &= ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((1443057420354357368LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39636)))))) : ((+(arr_0 [4ULL] [i_0 + 2]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)62520))));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [21] [i_1 + 1])) | ((-(((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */short) -2003213471);
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned short i_4 = 3; i_4 < 21; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_3]) / (arr_5 [i_4 + 2] [i_4 + 2] [i_4 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1691031610)) + (3899493366732358712ULL))))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (((((/* implicit */long long int) ((((/* implicit */int) (signed char)93)) / (1347006720)))) / (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)22] [(_Bool)1] [i_4] [i_5])) ? (((/* implicit */long long int) var_15)) : (var_7))))))))));
                        }
                    } 
                } 
            } 
            var_20 &= ((/* implicit */unsigned short) arr_0 [(unsigned char)22] [(unsigned char)22]);
        }
        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((12571520062126013893ULL) * (((/* implicit */unsigned long long int) arr_5 [i_6 - 1] [i_0 - 2] [i_0 - 1]))))));
            var_22 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)8191)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)112))))), (((unsigned long long int) (short)21253))))));
        }
        var_23 *= ((/* implicit */unsigned char) (_Bool)0);
        var_24 |= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((int) (_Bool)1))))))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        var_25 -= ((/* implicit */short) arr_4 [i_7] [i_7] [i_7]);
        arr_20 [1] = max((((((/* implicit */_Bool) ((1163941785) - (((/* implicit */int) (signed char)-55))))) ? ((((_Bool)1) ? (((/* implicit */long long int) arr_16 [i_7] [(unsigned char)19])) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60155))) != (3459931884473248458ULL))))))), (((((/* implicit */long long int) ((/* implicit */int) var_16))) % (((long long int) -805641298)))));
    }
    var_26 *= var_1;
    var_27 *= ((/* implicit */short) ((unsigned short) ((int) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) -1))))));
}
