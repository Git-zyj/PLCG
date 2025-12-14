/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86406
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
    var_16 = ((/* implicit */int) ((unsigned short) ((min((var_3), (((/* implicit */long long int) var_7)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (-715696481) : (var_5)))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((((201326592) > (-717424472))) ? (((((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) << (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_8)) : (var_13))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53377)) && (((/* implicit */_Bool) var_11))))) != (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0]) != (2323570047U))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) ((717424471) <= (717424472)))), (((unsigned short) var_3))))) | (((/* implicit */int) ((((/* implicit */int) max((var_6), (var_1)))) <= (((((/* implicit */_Bool) -8181274997403455776LL)) ? (-717424472) : (1459727381))))))));
                        var_19 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5278986529541500936LL)) ? (((/* implicit */unsigned int) -494683190)) : (225480689U)))))) || (((((((/* implicit */_Bool) 1459727381)) && (((/* implicit */_Bool) -1779545957)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3U)) ? (1824418937U) : (((/* implicit */unsigned int) 425601431)))))))));
                        arr_11 [i_1 - 3] [i_2] [i_1 - 3] [10] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) (short)17549)) ? (-2892968383248669322LL) : (-2892968383248669327LL)));
                        arr_12 [i_0 - 4] [i_0 - 4] = ((/* implicit */long long int) (-(((int) 717424479))));
                    }
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((5278986529541500926LL) != (((((/* implicit */_Bool) -496322218)) ? (-6977828944426934276LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-27352)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4518))) : (4069486607U)))) ? (((2388086352U) ^ (((/* implicit */unsigned int) 717424495)))) : (((/* implicit */unsigned int) ((-717424471) | (((/* implicit */int) (short)-2102))))))) - (2761181478U)))));
                }
            } 
        } 
    } 
}
