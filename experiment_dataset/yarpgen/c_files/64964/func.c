/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64964
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 3; i_2 < 7; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) (short)-23167);
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) -876294739)) + (((((/* implicit */_Bool) 2568018342U)) ? (5847764750380231065ULL) : (((/* implicit */unsigned long long int) (-(1743105211U)))))))))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 5847764750380231065ULL)) ? (((/* implicit */int) (unsigned short)7970)) : (-1807985651))))) << (((((/* implicit */int) (signed char)122)) - (100)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) -111694482)) ? (((/* implicit */int) ((short) (signed char)-37))) : (max((((/* implicit */int) (_Bool)1)), (-728420122))))));
                                arr_12 [i_0] [i_3] = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-112)) + (2147483647))) << (((((/* implicit */int) (unsigned char)181)) - (181))))) / (((((/* implicit */int) (unsigned short)47639)) << (((1807985650) - (1807985636)))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-15170)) == (((/* implicit */int) (unsigned short)38046)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)27490)))) : (((/* implicit */int) (_Bool)1))))) ? ((-(((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (signed char)-8)))))) : (((/* implicit */int) (short)22088)))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (unsigned short)17896))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_1);
}
