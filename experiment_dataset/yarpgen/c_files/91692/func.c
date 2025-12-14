/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91692
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
    var_17 = ((/* implicit */int) min((((((((/* implicit */unsigned long long int) -4393857916385301198LL)) | (var_14))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (short)-12942)))))))), (((/* implicit */unsigned long long int) ((long long int) (-(11317454025689447196ULL)))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(min((8526584312944430507LL), (var_10)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3339150533U)))) ? (((((/* implicit */_Bool) 1433741719)) ? (((/* implicit */unsigned long long int) var_7)) : (var_9))) : (((/* implicit */unsigned long long int) var_11))))));
    var_19 = ((/* implicit */int) 11317454025689447196ULL);
    var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) == (((/* implicit */int) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((~(((((/* implicit */_Bool) var_0)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_21 *= ((/* implicit */signed char) (((+(((/* implicit */int) ((unsigned char) (short)12961))))) == (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_4))))))));
                    var_22 -= ((/* implicit */unsigned long long int) 5618999959437066551LL);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) var_7))) - (arr_7 [5LL] [5LL] [i_0] [i_0])));
    }
}
