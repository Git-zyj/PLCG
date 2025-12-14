/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9496
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_15 [i_4 + 2] [i_3 + 3] [i_0] [i_0] [i_2] [6ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (7168ULL)))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_4]))) : (((((/* implicit */_Bool) 7162ULL)) ? (((((/* implicit */_Bool) 1415306655)) ? (((/* implicit */int) (unsigned char)48)) : (((/* implicit */int) arr_12 [i_0] [13ULL] [i_4])))) : (((/* implicit */int) ((_Bool) (unsigned char)192)))))));
                                var_10 = ((/* implicit */short) (-(1415306647)));
                                var_11 = ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
                {
                    for (short i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-74))))));
                            arr_21 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */short) -2226550870419749718LL);
                        }
                    } 
                } 
                arr_22 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1415306642), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-15758)))))))) ? (2226550870419749727LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -204392252))))))));
                var_13 = ((/* implicit */int) ((((/* implicit */int) (signed char)32)) >= (((/* implicit */int) (unsigned char)158))));
            }
        } 
    } 
    var_14 |= ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (unsigned short i_8 = 3; i_8 < 16; i_8 += 1) 
        {
            {
                arr_29 [(unsigned short)5] [i_7] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)-10725)) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (signed char)49))))));
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        for (int i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            {
                                arr_36 [i_7 - 1] [i_9] = ((-3280003026561600856LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                                var_15 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned char)7))))))));
                                var_16 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)90))));
                            }
                        } 
                    } 
                } 
                arr_37 [i_8] [i_8] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) (unsigned short)32736)))));
            }
        } 
    } 
}
