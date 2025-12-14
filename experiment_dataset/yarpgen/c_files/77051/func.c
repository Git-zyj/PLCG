/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77051
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
    var_11 = ((/* implicit */_Bool) (short)-32754);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) max((var_5), (((/* implicit */long long int) 1206144546)))))) ? (var_2) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)29)) % (((/* implicit */int) (short)(-32767 - 1))))), (((((/* implicit */int) (short)-32763)) + (((/* implicit */int) (short)(-32767 - 1))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned long long int) ((unsigned long long int) (unsigned short)65513))))));
                            var_14 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) (unsigned char)31)))))) & (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) (unsigned char)91))))), (max((((/* implicit */unsigned int) var_10)), (4294967295U))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */int) var_1)))))) ? (((((/* implicit */int) (signed char)19)) % (((/* implicit */int) var_1)))) : (var_4)));
                var_16 -= ((/* implicit */short) (_Bool)1);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((short) var_9));
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    arr_11 [i_0] [i_1] [i_4] = ((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (var_1)))) ? (((int) (short)-32742)) : (((((/* implicit */_Bool) (short)32760)) ? (((/* implicit */int) (signed char)3)) : (((/* implicit */int) (unsigned short)0)))))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (short)32763)) + (((/* implicit */int) (short)-32763)))) >= (((((/* implicit */int) (short)32746)) & (((/* implicit */int) (unsigned short)11)))))))) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (549755813887LL)))));
                    arr_12 [i_0] [i_4] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) -717234098))) % (((/* implicit */int) (_Bool)1))))) + ((((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) * (((/* implicit */long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) var_4))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((((((unsigned long long int) (unsigned char)205)) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) + (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                                var_19 *= ((((unsigned long long int) -717234093)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned char)128)))));
                                var_20 += ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) >= (max((-1278174760269712496LL), (((/* implicit */long long int) 1048575))))))) & (((((/* implicit */int) ((_Bool) (unsigned char)51))) + (((((/* implicit */int) (unsigned char)238)) & (((/* implicit */int) (unsigned char)204))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((max((-8844024313131688685LL), (((/* implicit */long long int) var_7)))) >= (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) & (-7435159818001516349LL))))))));
                }
            }
        } 
    } 
}
