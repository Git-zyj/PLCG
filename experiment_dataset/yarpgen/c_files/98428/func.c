/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98428
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
    var_15 += ((/* implicit */_Bool) max((var_12), (((max((var_12), (var_10))) * (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((-(var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned char)186)) : (var_8)))) ? (((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_14)))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32))) <= (1479451054178438920ULL))) ? (((/* implicit */int) (_Bool)0)) : (((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))))))));
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)190))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1479451054178438900ULL)) || (((/* implicit */_Bool) var_6))))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)171))))))));
    var_18 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 += ((/* implicit */int) max(((_Bool)1), (((1900290609U) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)32)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned short)53196)) || (((/* implicit */_Bool) -1553890352)))) || (((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_0)))))) ? (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1 - 1] [i_3 + 4] [i_3 + 1])) ? (arr_10 [i_1 + 1] [i_1 - 1] [i_3 + 4] [i_3 + 1]) : (((/* implicit */int) var_5)))) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(var_2)))), (var_4))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_5 [i_2] [i_1 - 1]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) (((+(-1945683842))) + ((+(min((((/* implicit */int) (unsigned short)5)), (var_6)))))));
                                arr_22 [i_0] [i_0] [i_0] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) -1945683842)) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)62))))))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (max((var_8), (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 1945683841)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))))) - (max((((/* implicit */int) (unsigned short)65535)), (arr_1 [i_1 - 1] [i_1])))));
                }
            } 
        } 
    } 
}
