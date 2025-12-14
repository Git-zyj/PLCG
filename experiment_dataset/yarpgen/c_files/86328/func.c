/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86328
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
    var_12 = ((/* implicit */unsigned long long int) var_2);
    var_13 = ((/* implicit */int) var_9);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 4; i_4 < 8; i_4 += 1) 
                        {
                            var_14 = ((/* implicit */short) ((-1246452982) / (((/* implicit */int) min(((signed char)104), ((signed char)104))))));
                            var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (-1441381324)))), (var_6)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (signed char)-105))))) && ((!(var_7)))))))));
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (signed char)101))));
                            var_17 *= ((/* implicit */short) (-(var_6)));
                        }
                        var_18 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) - (((long long int) var_7))));
                        arr_16 [i_2] = ((/* implicit */unsigned short) var_11);
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (var_6)))) <= (((long long int) (unsigned char)164))));
                    }
                    var_20 = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) | (max((((/* implicit */unsigned int) (short)-32759)), (var_11)))))));
                }
            } 
        } 
    } 
}
