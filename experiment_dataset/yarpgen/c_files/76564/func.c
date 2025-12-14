/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76564
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
    var_11 = ((/* implicit */long long int) var_4);
    var_12 = ((/* implicit */long long int) var_6);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) -6098203036255012804LL)), (max((8642930178948517016ULL), (17569616750116495016ULL)))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        var_13 = max(((~(arr_8 [i_0] [4U] [i_3]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) | (((/* implicit */int) ((_Bool) var_5)))))));
                        arr_14 [i_0] [i_1] [i_2] [(signed char)1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_8 [i_3] [i_0] [i_0]) > (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2] [i_3])), (-6098203036255012804LL)))))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] [i_0] = var_0;
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    arr_20 [i_4] = ((/* implicit */unsigned long long int) (~(arr_16 [i_5] [i_4] [i_0])));
                    var_14 = ((/* implicit */unsigned char) 4545513471172686458ULL);
                    var_15 += ((/* implicit */unsigned char) -6098203036255012804LL);
                }
            } 
        } 
        arr_21 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) (unsigned char)148))))) + (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0])) >= (((/* implicit */int) (signed char)-7)))))));
    }
    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) arr_22 [i_6]);
        arr_25 [i_6] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) min(((unsigned char)148), ((unsigned char)113)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7))))) : (((/* implicit */int) (unsigned char)148))))));
    }
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        arr_30 [i_7] [i_7] = ((/* implicit */unsigned char) 12406675070917845477ULL);
        arr_31 [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)194)) << (((13992209011675260030ULL) - (13992209011675260021ULL)))));
        var_16 += ((/* implicit */signed char) var_3);
    }
    for (int i_8 = 0; i_8 < 22; i_8 += 1) 
    {
        arr_36 [i_8] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (signed char)-6)) / (((/* implicit */int) (unsigned char)107)))) / (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_7)))))), (((/* implicit */int) arr_32 [7ULL] [i_8]))));
        arr_37 [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
        var_17 *= ((/* implicit */_Bool) arr_35 [i_8]);
        var_18 += ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((signed char) arr_34 [1LL] [i_8]))), (max((arr_32 [i_8] [i_8]), (arr_35 [(unsigned char)5]))))))));
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) (unsigned char)148))))), (var_6)));
    }
    var_20 = ((/* implicit */unsigned int) var_2);
}
