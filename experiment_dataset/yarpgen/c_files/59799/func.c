/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59799
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
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (+(-405731211)))), ((+(max((arr_5 [i_0]), (((/* implicit */long long int) (unsigned short)1646))))))));
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) max((min(((+(((/* implicit */int) (short)-9588)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)133)))))), ((+(((/* implicit */int) max(((short)-19064), (arr_9 [i_0] [i_1] [i_2]))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_10 = ((/* implicit */unsigned short) (~(min((max((var_9), (((/* implicit */int) var_2)))), ((~(((/* implicit */int) arr_0 [i_0]))))))));
            var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+((+((~(arr_8 [i_3] [i_3] [i_0] [i_0]))))))))));
            arr_15 [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) min((var_0), (((/* implicit */short) var_4)))))))));
        }
    }
    var_12 = (-(((/* implicit */int) (!((!((_Bool)0)))))));
    var_13 = ((/* implicit */_Bool) (-(max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) max((var_2), (((/* implicit */signed char) (_Bool)1)))))))));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 4066932763847420447ULL))))))))))));
}
