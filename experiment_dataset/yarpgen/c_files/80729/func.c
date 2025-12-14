/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80729
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_10))))) : (((/* implicit */int) var_0))));
    var_13 = (((~(((((/* implicit */_Bool) var_11)) ? (var_9) : (1569434746))))) & (((/* implicit */int) (!((_Bool)1)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) (unsigned char)0);
                    var_15 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (unsigned short)16813)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_0] [i_1] [(unsigned short)19]))), (arr_4 [i_0] [i_1] [i_2]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 63LL)) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned char)241)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (signed char i_6 = 2; i_6 < 17; i_6 += 4) 
                    {
                        {
                            arr_14 [i_6] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */int) (unsigned short)16806);
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)-120)), (((((((/* implicit */_Bool) -64LL)) ? (((/* implicit */int) (unsigned short)48729)) : (((/* implicit */int) (_Bool)1)))) + (arr_1 [i_6 + 2])))));
                            arr_15 [i_5] [i_5] [i_4 + 3] [i_5] [i_4] [i_5] = ((/* implicit */signed char) 12305902478889719107ULL);
                        }
                    } 
                } 
                var_17 = ((/* implicit */signed char) max((((/* implicit */unsigned int) max((((int) arr_4 [(signed char)14] [i_3] [i_3])), (((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_3))))))), (4294967295U)));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 20; i_7 += 1) 
                {
                    for (unsigned int i_8 = 4; i_8 < 19; i_8 += 1) 
                    {
                        {
                            arr_20 [i_8] [(_Bool)1] [(_Bool)1] [i_4] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_6 [i_3])) ? (((((/* implicit */_Bool) -4920735016752305945LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14159512106774517354ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)99)) % (((/* implicit */int) arr_9 [0]))))))), (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_8)))))))));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)31)) ^ (((/* implicit */int) (unsigned short)48723))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) arr_16 [i_3] [i_3] [(unsigned char)13] [i_3]);
            }
        } 
    } 
}
