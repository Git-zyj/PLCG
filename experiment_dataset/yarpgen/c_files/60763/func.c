/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60763
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
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((13659127694701286099ULL), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */unsigned long long int) min(((+(129056276))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40677)) || (((/* implicit */_Bool) 13659127694701286084ULL)))))))) : (4787616379008265517ULL)));
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) 19590487);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(4787616379008265517ULL))), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_0)), (6837985253799822876LL)))))) : ((((!(((/* implicit */_Bool) 2773787500940727321ULL)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (short)32749)))))) : ((((_Bool)1) ? (4787616379008265516ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) 4787616379008265516ULL)) ? (((((/* implicit */_Bool) (-(2359240722146443111ULL)))) ? (24212499) : (((/* implicit */int) (unsigned short)65535)))) : (-129056276)));
            }
        } 
    } 
    var_20 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            for (short i_4 = 3; i_4 < 8; i_4 += 4) 
            {
                {
                    var_21 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)90)) ? (-24212499) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) max(((unsigned short)37777), (((/* implicit */unsigned short) var_18))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)17330)) ? (var_1) : (((/* implicit */int) var_18))))) : (((((/* implicit */_Bool) -8911842408023761765LL)) ? (var_11) : (((/* implicit */unsigned long long int) var_7)))))) : ((~(min((((/* implicit */unsigned long long int) -129056276)), (13659127694701286100ULL)))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (+(((/* implicit */int) var_18)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) -1492952806)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))))), (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))));
    var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
}
