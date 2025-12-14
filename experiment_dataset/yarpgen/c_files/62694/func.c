/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62694
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
    var_11 = ((((/* implicit */int) (unsigned short)65529)) + ((-(((var_7) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) (_Bool)1);
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                            {
                                var_13 ^= ((/* implicit */unsigned char) (+(3340596321636027473LL)));
                                arr_11 [i_0] [i_1] [i_1] [i_0] [23] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-40))));
                            }
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_0] [i_3] = min(((_Bool)0), ((_Bool)1));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))))) + (((unsigned int) (_Bool)0))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_6 = 2; i_6 < 23; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        {
                            arr_22 [13LL] [i_1] [i_0] [(unsigned short)8] = max(((~(((/* implicit */int) (_Bool)1)))), (var_1));
                            var_14 = ((/* implicit */_Bool) min((((((/* implicit */int) (!((_Bool)1)))) + (((/* implicit */int) min(((unsigned short)45657), (((/* implicit */unsigned short) arr_0 [6LL]))))))), (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)242))))));
                            var_15 += ((/* implicit */unsigned int) max((((((/* implicit */int) ((_Bool) (unsigned short)32768))) + (((/* implicit */int) min(((_Bool)1), ((_Bool)0)))))), (((/* implicit */int) var_0))));
                            var_16 = ((/* implicit */signed char) (_Bool)1);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] = max((max((((/* implicit */int) (_Bool)1)), (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_0] [i_1] [i_6 - 2] [i_1] [i_6] [i_6 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) min(((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) (signed char)25)) ? ((-(((/* implicit */int) (_Bool)1)))) : (max((-1098086726), (((/* implicit */int) (signed char)76))))))));
    var_18 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0))));
}
