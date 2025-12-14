/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91406
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
    var_16 = ((/* implicit */unsigned short) var_1);
    var_17 &= var_2;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 += ((/* implicit */long long int) (unsigned char)7);
        arr_2 [(signed char)12] [7LL] |= ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        arr_3 [11LL] = ((/* implicit */signed char) ((1215641496170842055ULL) > (1215641496170842080ULL)));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            var_19 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)157))));
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_1 - 1])) != (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (unsigned char)167)))), (((/* implicit */int) ((unsigned char) arr_1 [(unsigned char)12] [(unsigned char)12])))))));
            arr_8 [2ULL] [i_1] [(unsigned short)2] = ((/* implicit */_Bool) (unsigned char)255);
        }
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            var_20 = ((/* implicit */_Bool) 1215641496170842055ULL);
            var_21 ^= ((/* implicit */short) var_2);
            arr_11 [i_0] [1LL] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_10 [i_2 + 2] [i_2] [i_2 + 1]), (((/* implicit */long long int) ((17231102577538709560ULL) <= (var_3))))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)190)) && (((/* implicit */_Bool) arr_9 [i_0] [i_0]))))), (min(((short)-23323), (((/* implicit */short) (unsigned char)157))))))))));
            var_22 = ((/* implicit */short) ((-2526288747126280076LL) / (((((((/* implicit */_Bool) 2718492570414614654LL)) ? (4572612951918785351LL) : (-2718492570414614654LL))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        }
        arr_12 [7LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)65531))));
    }
    var_23 = max((((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (1215641496170842028ULL))))), (((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1215641496170842055ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))))))) : (max((((/* implicit */unsigned long long int) (short)32758)), (17619211496251038787ULL))))));
}
