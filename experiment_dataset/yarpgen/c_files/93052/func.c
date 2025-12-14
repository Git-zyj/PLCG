/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93052
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1 + 4] [14U])) <= (((/* implicit */int) arr_5 [5U])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_14 [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (max((((arr_2 [i_1]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30960))))), (((/* implicit */unsigned int) min((arr_11 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 4]), (((/* implicit */int) arr_3 [i_0] [(unsigned short)13])))))))));
                                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((((/* implicit */_Bool) (~(arr_11 [i_0] [(unsigned char)0] [i_1] [0])))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-74)))) : (((/* implicit */int) var_9)))) == (((/* implicit */int) (unsigned char)13)))))));
                                var_14 = ((/* implicit */unsigned short) (unsigned char)240);
                                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8592)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) : ((~(2949915719U)))))) ? (((((/* implicit */_Bool) (signed char)-11)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2469536188U)) ? (((/* implicit */int) ((signed char) 3847776591U))) : (((/* implicit */int) (short)-32766)))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) (-(min((((arr_0 [(_Bool)1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [(_Bool)1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)178)) : (((/* implicit */int) (unsigned char)235)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-79)) > (((/* implicit */int) ((unsigned short) min(((unsigned char)185), (var_9)))))));
    var_18 &= ((/* implicit */_Bool) (unsigned short)64381);
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            for (unsigned char i_7 = 3; i_7 < 21; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) arr_16 [i_5] [(signed char)9]);
                                var_20 = ((/* implicit */unsigned int) (short)-32523);
                            }
                        } 
                    } 
                    arr_29 [i_6] = ((/* implicit */short) max((min((arr_21 [i_7] [i_6] [i_5]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)4)), ((unsigned short)34232)))))), (((/* implicit */unsigned int) (unsigned char)28))));
                }
            } 
        } 
    } 
}
