/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98566
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            var_15 += (unsigned short)65000;
                            var_16 += arr_2 [i_0] [i_0];
                            var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)10744)));
                        }
                    } 
                } 
                arr_8 [i_1] [i_1] [i_0] = (unsigned short)35807;
                var_18 *= (unsigned short)0;
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned short i_5 = 2; i_5 < 11; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = (unsigned short)44596;
                                arr_18 [i_0] [i_1] [i_4] [i_4] [i_6] = max(((unsigned short)10), ((unsigned short)6589));
                                arr_19 [(unsigned short)0] [i_4] [i_4] [i_4] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [(unsigned short)7] [i_4] [i_4] [i_4] [(unsigned short)10]))))) ? (((/* implicit */int) (unsigned short)49766)) : (((/* implicit */int) arr_16 [i_4] [i_1] [i_4] [(unsigned short)1]))));
                                arr_20 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)57212))));
                                arr_21 [(unsigned short)9] [i_4] = (unsigned short)0;
                            }
                        } 
                    } 
                } 
                arr_22 [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)18264))));
            }
        } 
    } 
    var_19 = (unsigned short)1410;
    var_20 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned short)49159)))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)64126)) : (((/* implicit */int) (unsigned short)3))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6160)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)61363))));
}
