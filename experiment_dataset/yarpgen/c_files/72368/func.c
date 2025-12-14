/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72368
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_20 *= ((/* implicit */unsigned short) (-(7440385934163420973ULL)));
        var_21 |= ((/* implicit */unsigned short) (short)-1);
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 19; i_2 += 2) 
        {
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) (unsigned short)48284)) - (48262)))));
            var_22 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)1157)) != (((/* implicit */int) (short)-15720)))))) + (max((8781486324651806010ULL), (((/* implicit */unsigned long long int) (short)0))))));
        }
        var_23 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)43)) || (((/* implicit */_Bool) (short)1)))))) <= ((+(((/* implicit */int) max((((/* implicit */short) (signed char)-62)), ((short)-8680))))))))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((signed char) (short)0)))));
    }
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)49)) <= (((/* implicit */int) (short)0))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)255)), (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) var_8)))))))));
                    }
                } 
            } 
        } 
        var_28 *= ((/* implicit */short) ((((((/* implicit */_Bool) -5787471403616646370LL)) ? (((/* implicit */int) (unsigned short)16426)) : (((/* implicit */int) (unsigned short)17251)))) % (((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)49110)) : (-1227329668)))));
    }
    var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)1152)), (8862339655593605451LL)))) : (var_7)));
    var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_16)) >> (((var_14) + (693701331)))))));
}
