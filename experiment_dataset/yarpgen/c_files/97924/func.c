/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97924
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] = ((unsigned short) min(((unsigned short)0), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32768)))))));
                            var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 3651336049U))))) + (min((((/* implicit */int) var_1)), (var_7))))))));
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_7)))))))));
                            var_12 *= ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32763)) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) ((unsigned long long int) max((57344U), (((/* implicit */unsigned int) (unsigned short)32791)))))))))));
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (96505554U))))));
                arr_11 [i_0] [i_0] = ((/* implicit */short) var_8);
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)32791)) ? (((/* implicit */int) (unsigned short)32787)) : (((/* implicit */int) (unsigned short)32796)))));
                                var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) 4348516354866976652ULL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_31 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (1681445572U))))) : (min((var_0), (((/* implicit */unsigned long long int) var_9))))));
                                arr_32 [i_7] [i_8] [i_7] [i_10] [i_11] = max(((unsigned short)32768), ((unsigned short)0));
                            }
                        } 
                    } 
                } 
                arr_33 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (min((((/* implicit */long long int) var_7)), (var_3))) : (((/* implicit */long long int) ((int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((4198461742U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
}
