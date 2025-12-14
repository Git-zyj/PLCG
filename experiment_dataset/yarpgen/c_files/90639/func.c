/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90639
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) min((((14049238003204039669ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) > (var_14))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (min((249668509U), (arr_0 [i_2] [i_0]))))))));
                    var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65523)) ? (var_0) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((short) arr_8 [i_0] [i_1] [i_1] [i_2]))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (unsigned char)200)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((min((((/* implicit */unsigned int) var_2)), (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) % (var_14))))) == (((/* implicit */unsigned int) (((((+(((/* implicit */int) (short)-23389)))) + (2147483647))) << (((((arr_9 [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)215))))) - (3766919228U))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned long long int) var_5)), (var_0))))) || (((/* implicit */_Bool) arr_7 [(unsigned short)0] [(unsigned short)0] [i_4] [i_4]))));
                /* LoopNest 3 */
                for (unsigned int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 4) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_19 [i_3] [(unsigned char)17] [i_5] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_11) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4 + 1] [i_3 - 1] [i_5]))))))));
                                arr_20 [i_4] [6] [i_5] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)46)) >> (((((/* implicit */int) (unsigned short)65527)) - (65515)))))) / ((((_Bool)0) ? (var_0) : (((/* implicit */unsigned long long int) var_7)))))) < (((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520))) / (var_11)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) var_0);
    var_20 = ((/* implicit */short) var_0);
}
